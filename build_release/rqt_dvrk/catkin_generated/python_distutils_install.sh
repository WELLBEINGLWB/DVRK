#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/jiameng/catkin_dvrk/src/dvrk-ros/deprecated/rqt_dvrk"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/jiameng/catkin_dvrk/install_release/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/jiameng/catkin_dvrk/install_release/lib/python2.7/dist-packages:/home/jiameng/catkin_dvrk/build_release/rqt_dvrk/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/jiameng/catkin_dvrk/build_release/rqt_dvrk" \
    "/usr/bin/python" \
    "/home/jiameng/catkin_dvrk/src/dvrk-ros/deprecated/rqt_dvrk/setup.py" \
    build --build-base "/home/jiameng/catkin_dvrk/build_release/rqt_dvrk" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/jiameng/catkin_dvrk/install_release" --install-scripts="/home/jiameng/catkin_dvrk/install_release/bin"
