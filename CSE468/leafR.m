% Data generation
function Data=leafR()
    num=7*4*3;
    Data=zeros(100,num);
    for i=1:100
        I=imread(sprintf('leaves%d.jpg',i));
        [R1,R2,R3]=haarWavelet(I);
        %level 1 features
        [F0,F45,F90,F135]=glrl(R1);
        [SRE,LRE,GLN,RLN,RP,LG,HG]=glrlFeature(F0);
        [SRE1,LRE1,GLN1,RLN1,RP1,LG1,HG1]=glrlFeature(F45);
        [SRE2,LRE2,GLN2,RLN2,RP2,LG2,HG2]=glrlFeature(F90);
        [SRE3,LRE3,GLN3,RLN3,RP3,LG3,HG3]=glrlFeature(F135);
        Data1=[SRE LRE GLN RLN RP LG HG SRE1 LRE1 GLN1 RLN1 RP1 LG1 HG1 SRE2 LRE2 GLN2 RLN2 RP2 LG2 HG2 SRE3 LRE3 GLN3 RLN3 RP3 LG3 HG3];
        %level 2 features
        [FF0,FF45,FF90,FF135]=glrl(R2);
        [SRE,LRE,GLN,RLN,RP,LG,HG]=glrlFeature(FF0);
        [SRE1,LRE1,GLN1,RLN1,RP1,LG1,HG1]=glrlFeature(FF45);
        [SRE2,LRE2,GLN2,RLN2,RP2,LG2,HG2]=glrlFeature(FF90);
        [SRE3,LRE3,GLN3,RLN3,RP3,LG3,HG3]=glrlFeature(FF135);
        Data2=[SRE LRE GLN RLN RP LG HG SRE1 LRE1 GLN1 RLN1 RP1 LG1 HG1 SRE2 LRE2 GLN2 RLN2 RP2 LG2 HG2 SRE3 LRE3 GLN3 RLN3 RP3 LG3 HG3];
        %level 3 features
        [FFF0,FFF45,FFF90,FFF135]=glrl(R3);
        [SRE,LRE,GLN,RLN,RP,LG,HG]=glrlFeature(FFF0);
        [SRE1,LRE1,GLN1,RLN1,RP1,LG1,HG1]=glrlFeature(FFF45);
        [SRE2,LRE2,GLN2,RLN2,RP2,LG2,HG2]=glrlFeature(FFF90);
        [SRE3,LRE3,GLN3,RLN3,RP3,LG3,HG3]=glrlFeature(FFF135);
        Data3=[SRE LRE GLN RLN RP LG HG SRE1 LRE1 GLN1 RLN1 RP1 LG1 HG1 SRE2 LRE2 GLN2 RLN2 RP2 LG2 HG2 SRE3 LRE3 GLN3 RLN3 RP3 LG3 HG3];
        %Data matrix
        Data(i,:)=[Data1 Data2 Data3];
        i
        disp(' :number finished');
    end

end
