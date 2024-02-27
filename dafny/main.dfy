include "some/library"

module M {}

module {: A } M {}

module M.N {}

module M {
  module N {}
}

abstract module M {}

abstract ghost module M {}

abstract ghost module M {
  abstract ghost module N {}
}
