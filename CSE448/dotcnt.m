function [sample] = dotcnt(img)
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
  I=img;
  dim=[11 32];
  T = zeros(8, 8);
  for k = 1:8
     for l = 1:8
        W = I((k-1)*floor(dim(1)/8)+1:k*floor(dim(1)/8),(l-1)*floor(dim(2)/8)+1:l*floor(dim(2)/8));
        T(k,l) = sum(sum(W==0));
     end
  end
  I = T;
  sample=I(:)';
end 
