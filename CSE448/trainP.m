function [rTr,rTs,Time]=trainP(P,T,Test)
    rTr=zeros(15,2);%train
    rTs=zeros(15,2);%test
    Time=zeros(15,2);%time
    num=1;
    for i=1000:200:1200
        tic;
        N=perT(P,T,i);
        Y1=sim(N,P);
        Y2=sim(N,Test);
        [e1,e2]=cntC(Y1);
        [e3,e4]=cntT(Y2);
        rTr(num,1)=e1;
        rTr(num,2)=e2;
        rTs(num,1)=e3;
        rTs(num,2)=e4;
        Time(num,1)=toc;
        Time(num,2)=i;
        num=num+1;
    end
end 
