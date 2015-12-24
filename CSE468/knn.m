function KR=knn(train,Y,test)
    KR=zeros(10,3);
    for i=1:10
        net=ClassificationKNN.fit(train,Y,'NumNeighbors',i);
        loss=resubLoss(net);%resubstitution loss on train data
        cv=crossval(net);
        kloss = kfoldLoss(cv);% cross-validation on training data
        P=predict(net,test);
        R=(P==Y);
        ac=(sum(R)/50)*100;%testing data accuracy
        KR(i,1)=loss;
        KR(i,2)=kloss;
        KR(i,3)=ac;
    end
end 
