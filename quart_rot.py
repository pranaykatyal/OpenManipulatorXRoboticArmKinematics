
import numpy as np
np.set_printoptions(precision=4, suppress=True)

x = -0.6644
y = 0.6964
z = 0.1228
w = 0.2418

R = np.array([[2*(w*w) + 2*(x*x) - 1, (2*x*y - 2*w*z), (2*x*z + 2*w*y)],
              [(2*x*y + 2*w*z), (2*w*w + 2*y*y - 1), (2*y*z - 2*w*x)],
              [(2*x*z - 2*w*y),(2*y*z + 2*w*x),  (2*w*w + 2*z*z - 1)]])
print(R)
