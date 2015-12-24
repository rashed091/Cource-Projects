function [F0,F45,F90,F135]=glrl(I)
    [r,c] = size(I);
    level=16;
    F0 = zeros(r,c);    % 0 degree feature
    F45 = zeros(r,c);   % 45 degree feature
    F90 = zeros(r,c);   % 90 degree feature
    F135 = zeros(r,c);  % 135 degree feature
    I0 = I;             % temp image for 0 dergree
    I45 = I;            % temp image for 45 degree
    I90 = I;            % temp image for 90 degree
    I135 = I;           % temp image for 135 degree

    % calculating 0 degree gray level run-length feature
    count = 0;
    for i=1:r
        for j=1:c
            cur=I0(i,j); % current gray level
            count=count+1; % number of time current gray level appears in the image along 0 degree
            TF=check(i,j+1,r,c); % check index out of bound
            if(TF==1 && I0(i,j+1)==cur)
                continue;
            else
                F0(cur,count) = 1 + F0(cur,count);
                count=0;
            end
        end
    end
    % calculating 45 degree gray level run-length feature
    count = 0;
    for i=r:-1:1
        for j=c:-1:1
            cur=I45(i,j);  % current gray level
            if(cur==-1)
                continue;
            end
            count=count+1;  %  number of time current gray level appears in the image along 45 degree
            I45(i,j)=-1;
            m=i-1;
            for n=j+1:1:c
                TF=check(m,n,r,c);  % check index out of bound
                if(TF==1 && I45(m,n)==cur)
                    count=count+1;
                    I45(m,n)=-1;
                else
                    break;
                end
                m=m-1;
            end
            F45(cur,count) = 1 + F45(cur,count);
            count=0;
        end
    end
    % calculating 90 degree gray level run-length feature
    count = 0;
    for i=r:-1:1
        for j=c:-1:1
            cur=I90(i,j);  % current gray level
            if(cur==-1)
                continue;
            end
            count=count+1;  %  number of time current gray level appears in the image along 90 degree
            I90(i,j)=-1;
            n=j;
            for m=i-1:-1:1
                TF=check(m,n,r,c);  % check index out of bound
                if(TF==1 && I90(m,n)==cur)
                    count=count+1;
                    I90(m,n)=-1;
                else
                    break;
                end
            end
            F90(cur,count) = 1 + F90(cur,count);
            count=0;
        end
    end
    % calculating 135 degree gray level run-length feature
    count = 0;
    for i=r:-1:1
        for j=1:c
            cur=I135(i,j);  % current gray level
            if(cur==-1)
                continue;
            end
            count=count+1;  %  number of time current gray level appears in the image along 135 degree
            I135(i,j)=-1;
            m=i-1;
            for n=j-1:-1:1
                TF=check(m,n,r,c);  % check index out of bound
                if(TF==1 && I135(m,n)==cur)
                    count=count+1;
                    I135(m,n)=-1;
                else
                    break;
                end
                m=m-1;
            end
            F135(cur,count) = 1 + F135(cur,count);
            count=0;
        end
    end
    %resize features
    F0=F0(1:level,:);
    F45=F45(1:level,:);
    F90=F90(1:level,:);
    F135=F135(1:level,:);
    % End of function
end

function R=check(i,j,r,c)
    if(i>0 && i<=r && j>0 && j<=c)
        R=1;
    else
        R=0;
    end
end
