__author__ = 'rasheduzzaman'

__author__ = 'rasheduzzaman'

import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import sklearn.preprocessing as trans
from sklearn.lda import LDA
from sklearn.decomposition import PCA
from sklearn.cross_validation import train_test_split
from sklearn import svm, metrics
from sklearn.metrics import accuracy_score
import seaborn as sns
sns.set(palette="Set2")

###########################################################################################
# read data file
file = pd.read_csv('/home/rasheduzzaman/Courses/CS782/HAR_V1/v1.csv', header=None, sep=',')
df = pd.DataFrame(file)
data = df.convert_objects(convert_numeric=True)


# get data indexes
index = np.asarray(data.ix[:, 0:1].values)   # has column 0 and 1
classes = np.asarray(data.ix[:, 45].values)  # has column 45
data = np.asarray(data.ix[:, 2:44].values)   # has column 2 to 44

# actual working data
Y = classes.astype(str) # classes
X = data.astype(float)  # data
X = np.nan_to_num(X)    # replace all nan to zero

# Normalize the data
X_norm = trans.StandardScaler().fit_transform(X)

'''
# Perform PCA
pca = PCA(n_components=35)
X_t = pca.fit(X_norm).transform(X_norm)
print(np.sum(pca.explained_variance_ratio_))

'''
# Perform LDA
lda = LDA(n_components=35)
X_t = lda.fit(X_norm, Y).transform(X_norm)


st = np.unique(Y)  # class names

# Split the data into a training set and a test set
X_train, X_test, y_train, y_test = train_test_split(X_t, Y,  test_size=.3)

ss = np.zeros(30)
rng = np.arange(0, 3, 0.1)
j = 0
for i in rng:
    clf = svm.SVC(kernel='rbf', gamma=i)
    clf.fit(X_train, y_train)
    score = clf.score(X_test, y_test)
    y_pred = clf.predict(X_test)
    ss[j] = accuracy_score(y_test, y_pred)
    j = j + 1
print(np.max(ss))
sns.tsplot(ss, ci=95, color="blue", linewidth=3, err_kws={"alpha": .2})
sns.axlabel("gamma-value", "accuracy")
plt.title('Support Vector Classifier')
plt.legend(loc="lower")
plt.show()