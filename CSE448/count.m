function [e1,e2]=count(T,Y)
    [R,C]=size(Y);
    S=sum(T==Y);
    %disp('WRONG prediction');
    e1=(C-S);
    %disp('% of ERROR');
    e2=(double((C-S)/C)*100);
end 
