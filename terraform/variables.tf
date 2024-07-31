variable "github_owner" {
  description = "Github owner(username/organization)."
  type        = string
  sensitive   = false
}

variable "github_token" {
  description = "Github token."
  type = string
  sensitive = true
}
