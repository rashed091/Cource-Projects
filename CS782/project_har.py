__author__ = 'rasheduzzaman'

import numpy as np
import pandas as pd
import sklearn.preprocessing as trans
from sklearn.lda import LDA
from sklearn.decomposition import PCA
import matplotlib.pyplot as plt
from sklearn import svm
from sklearn.cross_validation import train_test_split
from sklearn.metrics import confusion_matrix

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

# Run classifier, using a model that is too regularized (C too low) to see
# the impact on the results
clf = svm.SVC(kernel='linear', C=0.03)
y_pred = clf.fit(X_train, y_train).predict(X_test)
#print(y_pred)

def plot_confusion_matrix(cm, title='Confusion matrix', cmap=plt.cm.hot):
    plt.imshow(cm, interpolation='nearest', cmap=cmap)
    plt.title(title)
    plt.colorbar()
    tick_marks = np.arange(len(st))
    plt.xticks(tick_marks, st, rotation=45)
    plt.yticks(tick_marks, st)
    plt.tight_layout()
    plt.ylabel('True label')
    plt.xlabel('Predicted label')


# Compute confusion matrix
cm = confusion_matrix(y_test, y_pred)
np.set_printoptions(precision=2)
#print('Confusion matrix, without normalization')
#print(cm)
plt.figure()
plot_confusion_matrix(cm)


# Normalize the confusion matrix by row (i.e by the number of samples
# in each class)
cm_normalized = cm.astype('float') / cm.sum(axis=1)[:, np.newaxis]
#print('Normalized confusion matrix')
#print(cm_normalized)
plt.figure()
plot_confusion_matrix(cm_normalized, title='Normalized confusion matrix')

plt.show()