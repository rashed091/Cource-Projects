function [E1,E2,Time]=trainPnn(P,T1,Test,T2)
        E1=zeros(40,3);
        E2=zeros(40,3);
        Time=zeros(40,2);
        num=1;
    for i=1:20
        T=ind2vec(T1);
        tic;
        %train
        net=newpnn(P,T,i);
        Y=sim(net,P);
        R1=vec2ind(Y);
        [e1,e2]=count(T1,R1);
        E1(num,1)=e1;
        E1(num,2)=e2;
        E1(num,3)=i;
        %test
        Y=sim(net,Test);
        R2=vec2ind(Y);
        [e3,e4]=count(T2,R2);
        E2(num,1)=e3;
        E2(num,2)=e4;
        E2(num,3)=i;
        Time(num,1)=toc;
        Time(num,2)=i;
        num=num+1;
    end

end 
