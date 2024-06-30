# Fetch latest versions
git fetch

echo "Building development release ..."

# Build Debug Release
git checkout dev && git pull origin dev && make tools && make > build_dev.log

echo "Done."