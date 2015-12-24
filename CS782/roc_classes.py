__author__ = 'rasheduzzaman'

import numpy as np
import matplotlib.pyplot as plt
from sklearn import svm, neighbors
from sklearn.metrics import roc_curve, auc
from sklearn.cross_validation import train_test_split
from sklearn.preprocessing import label_binarize
from sklearn.multiclass import OneVsRestClassifier
import pandas as pd
import sklearn.preprocessing as trans
from sklearn.lda import LDA
from sklearn.decomposition import PCA
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

# Binarize the output
y = label_binarize(y, classes=st)
n_classes = y.shape[1]


####################################################################

# shuffle and split training and test sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=.3,
                                                    random_state=0)

# linear discriminent classifier
#clf = LDA(solver="svd", store_covariance=True)

# linear discriminent classifier
clf = QDA()

# k-nearest neighbor classifier
#clf = neighbors.KNeighborsClassifier(4)

# support vector machine
#clf = svm.SVC(kernel='rbf', gamma=0.4,  probability=True, random_state=0)


# Learn to predict each class against the other
classifier = OneVsRestClassifier(clf)
y_score = classifier.fit(X_train, y_train).predict_proba(X_test)


# Compute ROC curve and ROC area for each class
fpr = dict()
tpr = dict()
roc_auc = dict()
for i in range(n_classes):
    fpr[i], tpr[i], _ = roc_curve(y_test[:, i], y_score[:, i])
    roc_auc[i] = auc(fpr[i], tpr[i])

# Compute micro-average ROC curve and ROC area
fpr["micro"], tpr["micro"], _ = roc_curve(y_test.ravel(), y_score.ravel())
roc_auc["micro"] = auc(fpr["micro"], tpr["micro"])


# Plot ROC curve
plt.figure()
plt.plot(fpr["micro"], tpr["micro"],
         label='micro-average ROC curve (area = {0:0.2f})'
               ''.format(roc_auc["micro"]))
for i in range(n_classes):
    plt.plot(fpr[i], tpr[i], label='ROC curve of class {0} (area = {1:0.2f})'
                                   ''.format(st[i], roc_auc[i]))

plt.plot([0, 1], [0, 1], 'k--')
plt.xlim([0.0, 1.0])
plt.ylim([0.0, 1.05])
plt.xlabel('False Positive Rate')
plt.ylabel('True Positive Rate')
plt.title('Receiver operating characteristic for multi-class')
plt.legend(loc="lower right")
plt.show()
