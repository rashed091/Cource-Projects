__author__ = 'rasheduzzaman'

import numpy as np
import pandas as pd
import sklearn.preprocessing as trans
from sklearn.lda import LDA
from sklearn import manifold
from sklearn.decomposition import PCA
from matplotlib import pyplot as plt
from mpl_toolkits.mplot3d import Axes3D


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


# Perform PCA
pca = PCA(n_components=3)
X_t = pca.fit(X_norm).transform(X_norm)
print(np.sum(pca.explained_variance_ratio_))

'''
# Perform LDA
lda = LDA(n_components=3)
X_t = lda.fit(X_norm, Y).transform(X_norm)
'''

st = np.unique(Y)  # class names
print(st)
# scatter plot
fig = plt.figure(figsize=(8, 8))
ax = fig.add_subplot(111, projection='3d')

colors = ['blue', 'red', 'green', 'yellow', 'orange', 'violet']
markers = ['s', 'o', 'H', 'D', '*', '<']

for lab, c, m in zip(st, colors, markers):
    ax.scatter(X_t[np.where(Y==lab), 0], X_t[np.where(Y==lab), 1], X_t[np.where(Y==lab), 2],
               c=c,      # color
               marker=m, # marker symbol
               s=40,     # markersize
               alpha=0.9 # transparency
               )
    plt.legend(st)

plt.show()
