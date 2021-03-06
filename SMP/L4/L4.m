%% Q1
clear all

stddev = 5;
mu = 100;

P_CDF95 = normcdf(95, mu, stddev);
P_CDF105 = normcdf(105, mu, stddev);

% Package with less than 5% dev
five_pack = P_CDF105 - P_CDF95;

% Package with between 5% and 10%
P_CDF90 = normcdf(90, mu, stddev);
P_CDF110 = normcdf(110, mu, stddev);

ten_pack = P_CDF95 - P_CDF90 + P_CDF110 - P_CDF105;

% Discarded
discard_pack = 1 - five_pack - ten_pack;

%% Q2
nResistor=1000;
DiscardedRes=0;
Res10pct=0;
Res5pct=0;
Res=stddev*randn(1,nResistor)+mu;

for n=1:nResistor
   if  Res(n)>110 || Res(n)<90
      DiscardedRes= DiscardedRes+1;
      
   else if Res(n)>105 || Res(n)<95
       Res10pct=Res10pct+1;
       else 
    Res5pct=Res5pct+1;       
       end
       
   end
end

%Percentage of 5% resistor:
Sim_5pct = 100*Res5pct/nResistor;

%Percentage of 10% resistor:
Sim_10pct = 100*Res10pct/nResistor;

%Percentage of resistor discarded:
Sim_discarded = 100*DiscardedRes/nResistor;

%% Q3
new_stddev = stddev;
for n=1:10000
    if 95<norminv(0.25, mu, new_stddev)
        new_stddev = new_stddev+0.001;
    end
end

new_stddev


%% Q4
nResistor=1000;
new_res=new_stddev*randn(1,nResistor)+mu;
figure(1)
histogram(new_res, 'Normalization','pdf');
figure(2)
ecdf(new_res);

%% Q5

new_mu = mean(new_res);
new_new_stddev = sqrt(var(new_res));

%% Q6

"The sample size is not large enough"



