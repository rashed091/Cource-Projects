function [tr,ts,Time]=trainB(P,T,test)
    tr=zeros(100,2);%train
    ts=zeros(100,2);%test
    Time=zeros(100,1);%time
    num=1;
        for j=1:100
            %disp('with j number of neuron in 1st hidden layer');j=j
            tic;
            N=startSim(P,T,j,1000);
            [w,x]=headCount(N,P);
            tr(num,1)=w;
            tr(num,2)=x;
            [y,z]=hCount(N,test);
            ts(num,1)=y;
            ts(num,2)=z;
            Time(num)=toc;
            num=num+1;
            if(w==0)
                disp('End of training and testing');
                j=j
                disp('with j number of the system was able to learn train data with no error');
                break;
            end
        end
end 
