# Fetch latest versions
git fetch

echo "Building debug release ..."

# Build Debug Release
git checkout debug && git pull origin debug && make tools && make > build_debug.log

echo "Done. Building production release ..."

# Build Main Release
git checkout main && git pull origin main && make tools && make > build_main.log

echo "Done."