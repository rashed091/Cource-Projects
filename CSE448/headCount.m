function [e1,e2]=headCount(N,test)
    Y=sim(N,test);
    R=vec2ind(compet(Y));
    V=validT(80,2400);
    S=(R==V);
    S=sum(S);
    %disp('WRONG prediction on train data');
    e1=(2400-S);
    %disp('% of ERROR');
    e2=(double((2400-S)/2400)*100);
end
