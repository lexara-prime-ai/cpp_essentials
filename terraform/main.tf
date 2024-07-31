provider "github" {
  token = var.github_token
  owner  = var.github_owner
}

resource "github_repository" "cpp_essentials" {
  name        = "cpp_essentials"
  description = "CPP essential training."
  visibility  = "public"
}
