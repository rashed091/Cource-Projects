% This function calculates Gray level feature
% intorduced by Galloway (1975) and Chu et al.(1990)
function [SRE,LRE,GLN,RLN,RP,LGRE,HGRE]=glrlFeatures(F)

    [r,c] = size(F);
    % Short Run Emphasis (SRE)
    SRE = 0;
    temp = 0;
    for i = 1:r
        for j = 1:c
          SRE = SRE + (F(i,j)/j^2)  ;
          temp = temp + F(i,j);
        end
    end
    SRE = SRE / temp;
    % End of SRE

    % Long Run Emphasis (LRE)
    LRE = 0;
    temp = 0;
    for i = 1:r
        for j = 1:c
          LRE = LRE + (F(i,j)*j^2)  ;
          temp = temp + F(i,j);
        end
    end
    LRE = LRE / temp;
    % End of LRE

    % Gray Level Non-uniformity (GLN)
    GLN = 0;
    temp = 0;
    for i = 1:r
        for j = 1:c
          GLN = GLN + (F(i,j)^2)  ;
          temp = temp + F(i,j);
        end
    end
    GLN = GLN / temp;
    % End of GLN

    % Run Length Non-uniformity (RLN)
    RLN = 0;
    temp = 0;
    for j = 1:c
        for i = 1:r
          RLN = RLN + (F(i,j)/j^2)  ;
          temp = temp + F(i,j);
        end
    end
    RLN = RLN / temp;
    % End of RLN

    % Run Percentage (RP)
    RP = 0;
    temp = r*c;
    for i = 1:r
        for j = 1:c
          RP = RP + F(i,j) ;
        end
    end
    RP = RP / temp;
    % End of RP

    % Low Gray Level Runs Emphasis(LGRE)
    LGRE = 0;
    temp = 0;
    for i = 1:r
        for j = 1:c
          LGRE = LGRE + (F(i,j)/i^2)  ;
          temp = temp + F(i,j);
        end
    end
    LGRE = LGRE / temp;
    % End of LGRE

    % High Gray Level Runs Emphasis (HGRE)
    HGRE = 0;
    temp = 0;
    for i = 1:r
        for j = 1:c
          HGRE = HGRE + (F(i,j)*i^2)  ;
          temp = temp + F(i,j);
        end
    end
    HGRE = HGRE / temp;
    % End of HGRE
end
