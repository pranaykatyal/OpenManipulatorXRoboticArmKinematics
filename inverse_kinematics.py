import numpy as np
import math

def get_q_values(transform):
	# Define constant values
	l0 = 36.076
	l1 = 96.326-l0
	l2 = 130.23056
	l3 = 124
	l4 = 133.4
	psi = math.atan2(24,128)

	o43 = [-l4, 0, 0, 1]

	o03 = np.matmul(transform, o43)
	x3 = o03[0]
	y3 = o03[1]
	z3 = o03[2]
	print(o03)

	r = math.sqrt(x3**2+y3**2)
	s = z3 - (l0+l1)
	D = (r**2 + s**2 - l2**2 - l3**2)/(2*l2*l3)
	R = math.sqrt(transform[0][3]**2+transform[1][3]**2)
	S = transform[2][3]-(l0+l1)
	phi = math.atan2(S-s, R-r)

	print(S, R)

	theta1 = math.atan2(transform[1][3], transform[0][3])
	theta3 = math.pi/2- math.atan2(D, math.sqrt(1-D**2))
	theta2 = math.atan2(r,s) + math.atan2(l2 +l3*math.cos(theta3), l3*math.sin(theta3))


	theta2 = -math.pi/2 + theta2 - psi
	theta3 = theta3 -(math.pi/2 - psi)
	theta4 = phi - theta2 - theta3
	return [theta1/math.pi*180, theta2/math.pi*180, theta3/math.pi*180, theta4/math.pi*180]

# q values = 0 0 0 0
zero_hom = [[  1.,     -0.,      0.,   281.4 ],
 [   0.,     -0.,     1.,      0.  ],
 [   0.,     -1.,      0.,    224.326],
 [   0.,      0.,      0.,      1.  ]]

# q values = 30 -10 20 20
test_hom = [[  0.75,    -0.433,   -0.5,    207.0254],
 [  0.433,   -0.25    , 0.866  ,119.5262],
 [ -0.5   ,  -0.866  ,  0.     ,138.3166],
 [  0.     ,  0.    ,   0.     ,  1.    ]]
print(get_q_values(test_hom))
print(get_q_values(zero_hom))
