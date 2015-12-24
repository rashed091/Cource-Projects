function [e1,e2]=hCount(N,test)
    Y=sim(N,test);
    R=vec2ind(compet(Y));
    V=validT(20,600);
    S=(R==V);
    S=sum(S);
    %disp('WRONG prediction on test data');
    e1=(600-S);
    %disp('% of ERROR');
    e2=(double((600-S)/600)*100);
end
