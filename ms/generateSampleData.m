phaseSample=[
3.0703    0.2280   -0.0046    0.0760    0.2681   90.7960
    2.9539    0.2929   -0.0665    0.0861    0.2534   90.9085
    2.8376    0.3485   -0.1303    0.0990    0.2396   91.0210
    2.7216    0.3952   -0.1934    0.1140    0.2265   91.1336
    2.6061    0.4335   -0.2534    0.1305    0.2141   91.2461
    2.4452    0.4744   -0.3286    0.1551    0.1979   91.4037
    2.2854    0.5020   -0.3902    0.1805    0.1829   91.5614
    2.1266    0.5182   -0.4353    0.2055    0.1690   91.7190
    1.9686    0.5250   -0.4625    0.2295    0.1562   91.8766
    1.7954    0.5238   -0.4706    0.2540    0.1432   92.0498
    1.6224    0.5140   -0.4583    0.2760    0.1314   92.2229
    1.4492    0.4940   -0.4301    0.2950    0.1205   92.3960
    1.2757    0.4605   -0.3908    0.3102    0.1105   92.5691
    1.1119    0.4161   -0.3453    0.3203    0.1018   92.7321
    0.9477    0.3640   -0.2895    0.3257    0.0939   92.8951
    0.7832    0.3080   -0.2236    0.3265    0.0865   93.0581
    0.6185    0.2516   -0.1485    0.3228    0.0797   93.2211
    0.5080    0.2146   -0.0937    0.3180    0.0756   93.3306
    0.3978    0.1797   -0.0364    0.3116    0.0716   93.4400
    0.2878    0.1455    0.0229    0.3037    0.0683   93.5495
    0.1774    0.1068    0.0840    0.2942    0.0673   93.6589
    0.0659    0.0594    0.1480    0.2829    0.0699   93.7684
   -0.0465    0.0056    0.2134    0.2698    0.0758   93.8778
   -0.1595   -0.0530    0.2765    0.2559    0.0849   93.9873
   -0.2727   -0.1141    0.3331    0.2422    0.0967   94.0967
   -0.3674   -0.1655    0.3736    0.2313    0.1082   94.1885
   -0.4619   -0.2155    0.4085    0.2210    0.1209   94.2803
   -0.5560   -0.2630    0.4380    0.2110    0.1345   94.3722
   -0.6497   -0.3070    0.4624    0.2016    0.1487   94.4640
   -0.8171   -0.3748    0.4948    0.1856    0.1749   94.6287
   -0.9833   -0.4254    0.5142    0.1710    0.2011   94.7935
   -1.1486   -0.4568    0.5230    0.1574    0.2262   94.9583
   -1.3134   -0.4681    0.5231    0.1450    0.2498   95.1231
   -1.4870   -0.4573    0.5175    0.1329    0.2723   95.2967
   -1.6608   -0.4302    0.5014    0.1219    0.2921   95.4704
   -1.8347   -0.3943    0.4696    0.1117    0.3082   95.6441
   -2.0091   -0.3491    0.4233    0.1024    0.3198   95.8178
   -2.1817   -0.2921    0.3689    0.0940    0.3261   95.9891
   -2.3546   -0.2236    0.3098    0.0863    0.3272   96.1605
   -2.5276   -0.1450    0.2503    0.0792    0.3233   96.3318
   -2.7004   -0.0582    0.1938    0.0727    0.3149   96.5031
   -2.8007   -0.0050    0.1642    0.0689    0.3083   96.6031
   -2.9012    0.0495    0.1326    0.0665    0.3005   96.7031
   -3.0023    0.1058    0.0939    0.0669    0.2914   96.8030
   -3.1043    0.1643    0.0480    0.0703    0.2806   96.9030
]


si=pi:-pi/20:-pi
yi=interp1(phaseSample(:,1),phaseSample(:,2:end),si,'linear','extrap')
SAMPLE=[si',yi];
SAMPLE(:,end)=SAMPLE(:,end)-SAMPLE(1,end)