__author__ = 'rasheduzzaman'

import numpy as np
from scipy import interp
import matplotlib.pyplot as plt
import pandas as pd
import sklearn.preprocessing as trans
from sklearn.lda import LDA
from sklearn.decomposition import PCA
from sklearn import svm, neighbors
from sklearn.metrics import roc_curve, auc
from sklearn.cross_validation import StratifiedKFold
from sklearn.qda import QDA


###############################################################################
# read data file
file = pd.read_csv('/home/rasheduzzaman/Courses/CS782/HAR_V1/v1.csv', header=None, sep=',')
df = pd.DataFrame(file)
data = df.convert_objects(convert_numeric=True)


# get data indexes
index = np.asarray(data.ix[:, 0:1].values)   # has column 0 and 1
classes = np.asarray(data.ix[:, 45].values)  # has column 45
data = np.asarray(data.ix[:, 2:44].values)   # has column 2 to 44


# actual working data
y = classes.astype(str) # classes
X = data.astype(float)  # data
X = np.nan_to_num(X)    # replace all nan to zero


# Normalize the data
X_norm = trans.StandardScaler().fit_transform(X)


###############################################################################
'''
# Perform PCA
pca = PCA(n_components=35)
X = pca.fit(X_norm).transform(X_norm)
print(np.sum(pca.explained_variance_ratio_))

'''
# Perform LDA
lda = LDA(n_components=35)
X = lda.fit(X_norm, y).transform(X_norm)
st = np.unique(y)  # class names

############################################################################
# Classification and ROC analysis

# linear discriminent classifier
#clf = LDA(solver="svd", store_covariance=True)

# linear discriminent classifier
#clf = QDA()

# k-nearest neighbor classifier
#clf = neighbors.KNeighborsClassifier(4)

# support vector machine
clf = svm.SVC(kernel='rbf', gamma=0.6,  probability=True, random_state=0)


# Run classifier with cross-validation and plot ROC curves
cv = StratifiedKFold(y, n_folds=4)

mean_tpr = 0.0
mean_fpr = np.linspace(0, 1, 100)
all_tpr = []

for i, (train, test) in enumerate(cv):
    y_p = clf.fit(X[train], y[train]).predict(X[test])
    probas_ = clf.fit(X[train], y[train]).predict_proba(X[test])

    # Compute ROC curve and area the curve
    yy = y[test] == y_p
    fpr, tpr, thresholds = roc_curve(yy, probas_[:, 1])
    mean_tpr += interp(mean_fpr, fpr, tpr)
    mean_tpr[0] = 0.0
    roc_auc = auc(fpr, tpr)
    plt.plot(fpr, tpr, lw=1, label='ROC fold %d (area = %0.2f)' % (i, roc_auc))

plt.plot([0, 1], [0, 1], '--', color=(0.6, 0.6, 0.6), label='Luck')

mean_tpr /= len(cv)
mean_tpr[-1] = 1.0
mean_auc = auc(mean_fpr, mean_tpr)
plt.plot(mean_fpr, mean_tpr, 'k--',
         label='Mean ROC (area = %0.2f)' % mean_auc, lw=2)

plt.xlim([-0.05, 1.05])
plt.ylim([-0.05, 1.05])
plt.xlabel('False Positive Rate')
plt.ylabel('True Positive Rate')
plt.title('k-fold CV and ROC')
plt.legend(loc="lower right")
plt.show()