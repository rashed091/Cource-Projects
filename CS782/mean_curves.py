__author__ = 'rasheduzzaman'

import numpy as np
import pandas as pd
import sklearn.preprocessing as trans
from sklearn.lda import LDA
from sklearn.decomposition import PCA
import matplotlib.pyplot as plt
import seaborn as sns
sns.set(palette="Set2")

# read data file
file = pd.read_csv('/home/rasheduzzaman/Courses/CS782/HAR_V1/v1.csv', header=None, sep=',')
df = pd.DataFrame(file)
data = df.convert_objects(convert_numeric=True)


# get data indexes
index = np.asarray(data.ix[:, 0:1].values)  # has column 0 and 1
classes = np.asarray(data.ix[:, 45].values)  # has column 45
data = np.asarray(data.ix[:, 2:44].values)  # has column 2 to 44

# actual working data
Y = classes.astype(str)  # classes
X = data.astype(float)  # data
X = np.nan_to_num(X)  # replace all nan to zero

# Normalize the data
X_norm = trans.StandardScaler().fit_transform(X)
st = np.unique(Y)  # class names

row = range(0, 33)
col = np.zeros(33)
k = 0
for n in range(2,35):
    '''
    # Perform PCA
    pca = PCA(n_components=n)
    X = pca.fit(X_norm).transform(X_norm)
    '''
    lda = LDA(n_components=n)
    X = lda.fit(X_norm, Y).transform(X_norm)


    meann = np.zeros((6, n))
    j = 0
    for c in st:
        for i in range(0, n):
            try:
                val = X[np.where(Y == c), i]
                meann[j, i] = np.mean(val)
            except:
                meann[j, i] = 0
        j = j + 1
    s = 0
    s = s + np.sum(np.abs(meann[0, :] - meann[4, :]))
    s = s + np.sum(np.abs(meann[4, :] - meann[5, :]))
    s = s + np.sum(np.abs(meann[5, :] - meann[0, :]))
    col[k] = s / 3
    k = k + 1
step = pd.Series(range(2, 33), name="step")
speed = pd.Series(["LDA"], name="speed")
sns.tsplot(col, condition=speed, ci=95, color="red", linewidth=2.5, err_kws={"alpha": .3})

row = range(0, 33)
col = np.zeros(33)
k = 0
for n in range(2,35):

    # Perform PCA
    pca = PCA(n_components=n)
    X = pca.fit(X_norm).transform(X_norm)

    meann = np.zeros((6, n))
    j = 0
    for c in st:
        for i in range(0, n):
            try:
                val = X[np.where(Y == c), i]
                meann[j, i] = np.mean(val)
            except:
                meann[j, i] = 0
        j = j + 1
    s = 0
    s = s + np.sum(np.abs(meann[0, :] - meann[4, :]))
    s = s + np.sum(np.abs(meann[4, :] - meann[5, :]))
    s = s + np.sum(np.abs(meann[5, :] - meann[0, :]))
    col[k] = s / 3
    k = k + 1

sns.tsplot(col, condition="PCA", ci=95, color="green", linewidth=2.5, err_kws={"alpha": .3})
sns.axlabel("n-component", "average mean distance")
plt.title('Receiver operating characteristic for multi-class')
plt.legend(loc="lower right")
plt.show()