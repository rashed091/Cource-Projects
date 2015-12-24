function [cgi,cgj]=CG(img)
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
  [r,c] = size(img);
  sum1=0;
  sum2=0;
  for i=1:r,
    for j=1:c,
      sum1 = sum1 + j*img(i,j);
    end
  end
  for i=1:r,
    for j=1:c,
      sum2 = sum2 + i*img(i,j);
    end
  end
  A=areaI(img);
  cgi=sqrt(sum1/A);
  cgj=sqrt(sum2/A);
end 
