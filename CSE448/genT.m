function T=genT(I,P,S)
    target=zeros(S,I);
    t=ones(P,1);
    c=0;
    num=1;
    for i=1:P:S
        c=c+P;
        target(i:c,num)=t;
        num=num+1;
    end
    T=target;
    T=T';
End 
