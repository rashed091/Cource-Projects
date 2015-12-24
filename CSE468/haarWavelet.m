function [R1,R2,R3]=haarWavelet(I)
    I=rgb2gray(I);
    % level 1 decomposition
    [I1,H1,V1,D1]=dwt2(I,'haar');
    [I1,H1,V1,D1]=gaussF(I1,H1,V1,D1);
    % level 2 decomposition
    [I2,H2,V2,D2]=dwt2(I1,'haar');
    [I2,H2,V2,D2]=gaussF(I2,H2,V2,D2);
    % level 3 decomposition
    [I3,H3,V3,D3]=dwt2(I2,'haar');
    [I3,H3,V3,D3]=gaussF(I3,H3,V3,D3);
    % data reconstruction
    R1=idwt2([],H1,V1,D1,'haar');
    R2=idwt2([],H2,V2,D2,'haar');
    R3=idwt2([],H3,V3,D3,'haar');

    R1=wcodemat(R1);
    R2=wcodemat(R2);
    R3=wcodemat(R3);
end

function [I,H,V,D]=gaussF(I,H,V,D)
    f=fspecial('gaussian',5);
    I=imfilter(I,f);
    H=imfilter(H,f);
    V=imfilter(V,f);
    D=imfilter(D,f);
end

function I=makeZ(I)
    I=round(I);
    [r,c]=size(I);
    for i=1:r
        for j=1:c
            if(I(i,j)<0)
                I(i,j)=0;
            end
        end
    end
end 
