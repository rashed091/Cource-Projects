function P=testD(D)
    P=zeros(225,600);
    num=1;
    for i=81:100:3000
        for j=i:((i+20)-1)
            P(:,num)=D(:,j);
            num=num+1;
        end
    end
end
