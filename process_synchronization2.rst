:data-transition-duration: 1000
:skip-help: true
:css: style2.css process_synchronization.css
:substep: true
:slide-numbers: true
:skip-help: true

.. title: Operating Systems: Process Synchronization

----

Operating Systems: Process Synchronization
===============================================
Ahmad Yoosofan
-----------------------------
https://yoosofan.github.io

Fall 2020

University of Kashan

----


.. raw:: html

  <div class="yoosofan-grid4code2column-with-header">
  <div class="yoosofan-grid4code2column-share-header-comment-row-1">
  Share code
  </div>
  <div class="yoosofan-grid4code2column-share-code-row-2 yoosofan-grid4code-border ">

.. code:: cpp
  :number-lines:
  :class: substep

  int turn = 0;

.. raw:: html

  </div><div class="yoosofan-grid4code2column-col-1-header-comment-row-3">
  P<sub>0</sub>
  </div><div class="yoosofan-grid4code2column-col-1-code-row-4 yoosofan-grid4code-border ">

.. code:: cpp
  :number-lines:
  :class: substep

  int turn = 1;
  int turn = 1;
  int turn = 1;
  int turn = 1;

.. raw:: html

  </div><div class="yoosofan-grid4code2column-col-2-header-comment-row-3">
  P<sub>1</sub>
  </div><div class="yoosofan-grid4code2column-col-2-code-row-4 yoosofan-grid4code-border ">

.. code:: cpp
  :number-lines:
  :class: substep

  int turn = 2;
  int turn = 2;
  int turn = 2;
  int turn = 2;

.. raw:: html

  </div></div>


----

test

.. :

  .. code:: cpp

            double x = 0 , y = 1;

  .. class:: smallerelementwithfullborder

    +------------------------+----------------------------+
    |     P0                 |             P1             |
    +------------------------+----------------------------+
    |  .. code:: cpp         |   .. code:: cpp            |
    |    :number-lines:      |     :number-lines:         |
    |                        |                            |
    |     x = y + 4 ;        |      x = y + 4 ;           |
    |     y = x - 2 ;        |      y = x - 2;            |
    +------------------------+----------------------------+



  ----

  With table
  ==================

  .. raw:: html

    <table class="smallerelementwithfullborder"><thead><tr><th>

  .. code:: cpp
    :number-lines:

    int turn = 0;

  .. raw:: html

    </th></tr></thead><tbody><tr><td>

  .. code:: cpp
    :number-lines:

    while(turn == 1)
      ;
    CS
    turn = 1;

  .. raw:: html

    </td><td>

  .. code:: cpp
    :number-lines:

    while(turn == 0)
      ;
    CS
    turn = 0;

  .. raw:: html

    </td></tr></tbody></table>

  Other links
  ****************
  C#
  ================
  https://developpaper.com/concurrent-programming-in-net-core/
  https://www.shekhali.com/multithreading-in-c/



  https://regi.tankonyvtar.hu/hu/tartalom/tamop412A/2011-0052_23_advanced_programming_laguages/ar01s14.html
  https://stackoverflow.com/questions/49478513/concurrent-programming-operation-order
  https://www.researchgate.net/publication/3298852_A_correct_and_scalable_deadlock_avoidance_policy_for_flexible_manufacturing_systems/figures?lo=1&utm_source=google&utm_medium=organic
  https://stackoverflow.com/questions/49478513/concurrent-programming-operation-order

  Productive parallel programming in Python
  Use Parsl to create parallel programs comprised of Python functions and external components. Execute Parsl programs on any compute resource from laptops to supercomputers.
  https://parsl-project.org/


  https://onlinelibrary.wiley.com/doi/full/10.1002/cpe.4175
  http://kevinpelgrims.com/blog/2010/08/30/parallel-programming-in-net-introduction/
  https://livebook.manning.com/book/concurrency-in-dot-net/chapter-1/
  http://kevinpelgrims.com/blog/2010/08/30/parallel-programming-in-net-introduction/
  https://dev.to/clightning/good-bad-ugly-in-concurrent-programming-with-c-30ke
  
  https://www.modernescpp.com/index.php/c-core-guidelines-rules-for-concurrency-and-parallelism
  https://www.modernescpp.com/index.php/multithreading-in-c-17-and-c-20
  https://www.heise.de/developer/meldung/Programmiersprache-Der-Entwurf-von-C-20-ist-abgeschlossen-4317206.html
  https://www.toptal.com/software/introduction-to-concurrent-programming
  https://dev.to/clightning/good-bad-ugly-in-concurrent-programming-with-c-30ke
  
  https://www.shekhali.com/multithreading-in-c/
  https://maharajan-ses.medium.com/asynchronous-programming-part-1-eb1e9df80377
  
  dividing code parallel programming
  
  https://sulangsss.github.io/2018/09/16/Java/Thread/Concurrency%20vs%20Parallelism/
  https://medium.com/dev-genius/multi-threading-vs-asynchronous-programming-what-is-the-difference-3ebfe1179a5
  
  https://www.tutorialspoint.com/operating_system/os_overview.htm
  
