function [D] = horiSlice(img)
  %img=imresize(img,[84 256]);
    [r,c,k]= size(img);
    if(k==1)% the image is already in single channel (gray or binary)
        img = im2double(img);
    elseif(k==3)
        img = im2double(rgb2gray(img));
    end

  %img=im2double(img);
  g=graythresh(img);
  img=im2bw(img,g);
    img=bwmorph(img,'clean');
    B = img;
    [r,c]= size(B);
    %r1 = floor(r/4);
    c1 = floor(c/4);
    t=0;
    D = zeros(1,4);
    E = [0 1];
    e=0;
    count = 1;
    for i=c1:c1:c
        C = B(:,i:i);
        j=1;
        t=0;
            while(j<=r)
                if(C(j,:)==0)
                    while(j<=r && C(j,:)~=1)
                        j=j+1;
                    end
                    if(j<=r && C(j,:)==1)
                        t=t+1;
                    end
                end
                if(j<=r && C(j,:)==1)
                    %t=t+1;
                    while(j<=r && C(j,:)~=0)
                        j=j+1;
                    end
                    if(j<=r && C(j,:)==0)
                        t=t+1;
                    end
                end
            end
            D(1,count)=t;
            count = count + 1;
    end
end
