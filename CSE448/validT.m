function V=validT(P,S)
    tt=ones(1,S);
    num=1;
    c=0;
    for i=1:P:S
        c=c+P;
        tt(:,i:c)=num;
        num=num+1;
    end
    V=tt;
End
