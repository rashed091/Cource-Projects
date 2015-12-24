function [D] = vertSlice(img)
  %img=imresize(img,[84 256]);
    [r,c,k]= size(img);
    if(k==1)% the image is already in single channel (gray or binary)
        img = im2double(img);
    elseif(k==3)
        img = im2double(rgb2gray(img));
    end
  g=graythresh(img);
  img=im2bw(img,g);
    img=bwmorph(img,'clean');
    B = img;
    [r,c]= size(B);
    r1 = floor(r/4);
    c1 = floor(c/4);

    t=0;
    D = zeros(1,4);
    E = [0 1];
    e=0;
    count = 1;
    for i=r1:r1:r
        C = B(i:i,:);
        j=1;
        t=0;
            while(j<=c)
            if(C(:,j)==0)
                while(j<=c && C(:,j)~=1)
                    j=j+1;
                end
                if(j<=c && C(:,j)==1)
                    t=t+1;
                end
            end
            if(j<=c && C(:,j)==1)
                %t=t+1;
                while(j<=c && C(:,j)~=0)
                    j=j+1;
                end
                if(j<=c && C(:,j)==0)
                    t=t+1;
                end
            end
            end
            D(1,count)=t;
            count = count + 1;
    end
end
