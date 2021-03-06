\section{Related Work}

Motion Synthesis is a topic involves many research area,like biology, neural science and computer graphics.
It is impossible to include all the research work on motion synthesis. 
In this part, we will only talk about the mainstream method in computer graphics and research related to our search from other research community.


\subsection{Dynamic Motion Synthesis and Control}
Dynamic Motion Synthesis  tries to synthesize character motion through physical simulation of the mechanic structure of character body which is usually modelled as a linked rigid body system \citep{Baraff1994,Mirtich1996,Stewart2000}. 
Since many real physical properties are considered in the computation, the generated motion are normally physical feasible. However the most difficult task for those methods is to design a efficient control system to simulate the functionality of a real biological neural system. 
Some early research applied classical control methods like PD controller \citep{Raibert1991} for locomotion. 
Later research \citep{Hodgins1995} applied the same method for different tasks like running, bicycling, vaulting and balancing. 
Limit Circle Control(LCC) \citep{Laszlo1996} provides an alternative method for lower energy locomotion animation. 
However both the classical PD controller and Limit Circle Controller predefined motion trajectories and eliminated perturbations. This make them not good at generating motion adaptation.

Because lots of degrees of freedom are involved in the whole body simulation, in most cases, motion solutions are not unique. 
Many optimization methods have been applied to choose the ``best'' motion. For dynamic methods, a reasonable choice is to minimize the energy cost~$V$, such that 
\[
\textbf{V}=\int_{t0}^{t1}F_{a}(x)^2dt
\]
where $F_{a}$ is the active force generated by actuators like motors or muscles. 
This is introduced to CMS research as the influential Spacetime Constraints\citep{Witkin1988}, and serve as the foundation for many modern CMS research. \citet{Jain2009} provides an example for locomotion;  \citet{BalanceControl} find a method for balance maintaining movement. \citet{Liu2009} proposed a method for object manipulating animation.

The Spacetime method may modify the motion trajectory and in nature it solve the problem through variational optimization. However it faces several key problem.\\
\subsubsection*{Efficiency}
In many cases, it will take very long time to find the "best" solution and there is no guarantee the optimal solution can be achieved. And for complex body structures the computation will takes prohibitive long time \citep{Anderson2001}. Optimization techniques like time window and multi-grid techniques are proposed by \citet{Cohen1992} and \citet{Liu1994}. Very a few research \citep{Popovi'c1999} proposed Spacetime Constraint for full body dynamic animation.\\
\subsubsection*{Sensitive and Overspecific}
Current numeric methods are very sensitive to model accuracy and initial conditions. Precise model for both the environment and body have to be prebuilt. \citet{Liu2005} points out that spacetime constraint methods only suit high energy motions like jumping and running; for low energy motion tasks like walking the result doesn't looks nature. This is mainly because the muscle effects are neglected. Motions like heart beating, breathing, or motions of other animals such as the swimming of fish and jellyfish, flying of birds have not been synthesized with dynamic methods for the lack of a feasible dynamic model. 


\subsection{Biological Research}
In biological research, motor control is an age old problem full of paradoxes. 
Motor control in nature is a complex process involving many chemical, electrical and mechanical effects. 
So most of Dynamic motion synthesis methods tries to simulate the reality through very complicated computation. 
However this is very opposite to the characteristics of the neural systems of real creatures \citep{Glynn2003}: \\
\subsubsection*{Time Delay}
Neural signal transmitting speed is very slow; and there is a long delay between neural signal firing and force generation in muscles.\\ 
\subsubsection*{Noisy}
Besides the delay and low speed transition, the neural signals are also noisy. The body structure and environment are also nonlinear, noisy and time varying. \\
\subsubsection*{Limited Activity}
Current research evidences and common life experience show that motor control involves little control effort. Many experiments show motion can happen even without brain input. 

Despite the complexity of body structures and environment, the natural motor control strategy seems relatively simple involving vey little computational work. 
In many animals, the active neural structure in motor control is the Central Pattern Generator(CPG) which generates rhythmic signals. 
There are many experimental researches in robotics and biomechanics succeeded in controlling some motion with very simple strategy\citep{nishikawa2007neuromechanics}. 
\textbf{Uncontrolled Manifold Hypothesis} method even proposed that some DOFs are not controlled and freely influenced by the environment \citep{latash2008neurophysiological}.
 The\textbf{Equilibrium Point Hypothesis} method suggests that what the neural systems controls is not trajectory, but the final position. 
The \textbf{Impedance Control Hypothesis}\citep{hogan1985ica} method refines the idea of EPH by providing an explanation for effects of the extra DOFs. 
Impedance Control proposed the extra DOFs provide a way to control the stability and admittance of final postion according to the motion purpose. 
\textbf{Morphological Computation Theory} \citep{nishikawa2007neuromechanics,Pfeifer2005} thinks both the body structure and the environment play a crucial role in  motor control, basic motion patterns are generated by body and environment, the neural systems only  maintains or tweaks such motion patterns.

The biological ideas provide space for an efficient motion adaptation, but the theory are incomplete and mainly for explaining experiment results. There is a big knowledge gap to turn it into a sound control theory.
\subsection{Lie Group And Differential Equations}
Lie Group is an important idea of dynamic system research and differential equations.
By investigating the symetrical properties, researches development many method for reducing the complexity of system.
And developed complicate control method for dynamic system.
By investigating the symetry of differential equations, we can help to provide an alternative.

