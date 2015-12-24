function [x1,x2]=cntT(Y)
    n=1;
    nn=20;
    sam=0;
    num=0;
    for i=1:20:600
        sam=sam+nn;
        t=sum(Y(n,i:sam));
        num=num+t;
        n=n+1;
    end
    disp('WRONG prediction');
    x1=(600-num)
    disp('% of ERROR');
    x2=(double((600-num)/600)*100)

end 
