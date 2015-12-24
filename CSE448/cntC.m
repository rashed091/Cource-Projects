function [e1,e2]=cntC(Y)
    n=1;
    nn=80;
    sam=0;
    num=0;
    for i=1:80:2400
        sam=sam+nn;
        t=sum(Y(n,i:sam));
        num=num+t;
        n=n+1;
    end
    %disp('WRONG prediction');
    e1=(2400-num);
    %disp('% of ERROR');
    e2=(double((2400-num)/2400)*100);
end
