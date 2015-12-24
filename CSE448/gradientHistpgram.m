function [array] = gradientHistogram(img)
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
    A = ~img;
    [r,c]=size(A);
    r1 = floor(r/4);
    c1 = floor(c/4);
    array = zeros(4,4*4);
    cnt =1;
    u1=0; u2=0; u3=0; u4=0;
    for i=1:r1:r
        for j=1:c1:c
            if((i+r1-1)>r || (j+c1-1)>c)
                break;
            end
            b = A(i:i+r1-1,j:j+c1-1);
            for k=2:size(b,1)-1
                for q=2:size(b,2)-1
                    if(b(k,q)==1)
                        if(b(k,q+1)==1)
                            u1 = u1 + 1;
                            array(1,cnt) = u1;
                        elseif(b(k-1,q+1)==1)
                            u2 = u2 + 1;
                            array(2,cnt) = u2;
                        elseif(b(k-1,q)==1)
                            u3 = u3 + 1;
                            array(3,cnt) = u3;
                        elseif(b(k-1,q-1)==1)
                            u4 = u4 + 1;
                            array(4,cnt) = u4;
                        end
                    end
                end
            end
            cnt  = cnt + 1;
        end
    end
    array = array(:)';
end
