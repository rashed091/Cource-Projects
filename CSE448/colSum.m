function [ result ] = colSum(img)
    %img=imresize(img,[84 256]);
        [r,c,k]= size(img);
    if(k==1)% the image is already in single channel (gray or binary)
        img = im2double(img);
    elseif(k==3)
        img = im2double(rgb2gray(img));
    end

    %I=im2double(I);
    g=graythresh(img);
    img=im2bw(img,g);
    img=bwmorph(img,'clean');
    result=sum(~img');
end 
