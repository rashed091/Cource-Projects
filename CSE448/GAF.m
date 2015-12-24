function F = GAF(img)
    f1=areaI(img);
    [f2,f3]=CG(img);
    f4=horiSlice(img);
    f5=vertSlice(img);
    f6=gradientHistogram(img);
    f7=rowSum(img);
    f8=colSum(img);
    f9=dotcnt(img);
    F=[f1 f2 f3 f4 f5 f6 f7 f8 f9];
end
