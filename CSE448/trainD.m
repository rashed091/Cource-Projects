function P=trainD(D)
    P=zeros(225,2400);
    num=1;
    for i=1:100:2400
        for j=i:((i+80)-1)
            P(:,num)=D(:,j);
            num=num+1;
        end
    end
end
