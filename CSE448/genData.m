function [D]=genData()
    D=ones(161,3000);
    for i=1:3000
        I=imread(sprintf('%d.png',i));
        temp=GAF(I);
        D(:,i)=temp';
    end
end
