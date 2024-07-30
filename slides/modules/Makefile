CMAKE_CONFIG_OPTIONS += -GNinja

CMAKE_SUBDIRS = \
  export_1 \
  greet_1 \
  greet_2 \
  greet_3 \
  linkage_1 \
  math_1 \
  math_2 \
  module_1 \
  reachability_1 \
  reachability_2 \

.PHONY: all
all:
	for subdir in $(CMAKE_SUBDIRS); do \
	    if [ ! -d $$subdir ]; then continue; fi; \
	    echo PROCESSING DIRECTORY: $$subdir; \
		( cd $$subdir && \
		  cmake -H. -Btmp_cmake $(CMAKE_CONFIG_OPTIONS) && \
	        cmake --build tmp_cmake \
	    ) || exit 1; \
	done

.PHONY: clean
clean:
	for subdir in $(CMAKE_SUBDIRS); do \
	    if [ ! -d $$subdir ]; then continue; fi; \
		( cd $$subdir && rm -rf tmp_cmake ) || exit 1; \
	done
