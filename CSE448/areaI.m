function A=areaI(img)
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
  A=bwarea(img);
  A=sqrt(A);
End
