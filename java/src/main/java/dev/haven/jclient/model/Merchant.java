/*
 * Haven Money API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package dev.haven.jclient.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import dev.haven.jclient.model.Address;
import dev.haven.jclient.model.CleanCategory;
import dev.haven.jclient.model.OpenHours;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * Merchant
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-10-01T15:03:22.973823-07:00[America/Los_Angeles]")
public class Merchant {
  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_ADDRESS = "address";
  @SerializedName(SERIALIZED_NAME_ADDRESS)
  private Address address = null;

  public static final String SERIALIZED_NAME_HOURS = "hours";
  @SerializedName(SERIALIZED_NAME_HOURS)
  private OpenHours hours = null;

  public static final String SERIALIZED_NAME_IMAGE = "image";
  @SerializedName(SERIALIZED_NAME_IMAGE)
  private String image;

  public static final String SERIALIZED_NAME_BACKGROUND_IMAGE = "backgroundImage";
  @SerializedName(SERIALIZED_NAME_BACKGROUND_IMAGE)
  private String backgroundImage;

  public static final String SERIALIZED_NAME_CATEGORY = "category";
  @SerializedName(SERIALIZED_NAME_CATEGORY)
  private CleanCategory category;

  public static final String SERIALIZED_NAME_PHONE = "phone";
  @SerializedName(SERIALIZED_NAME_PHONE)
  private String phone;

  public static final String SERIALIZED_NAME_URL = "url";
  @SerializedName(SERIALIZED_NAME_URL)
  private String url;

  public static final String SERIALIZED_NAME_FACEBOOK = "facebook";
  @SerializedName(SERIALIZED_NAME_FACEBOOK)
  private String facebook;

  public static final String SERIALIZED_NAME_TWITTER = "twitter";
  @SerializedName(SERIALIZED_NAME_TWITTER)
  private String twitter;

  public static final String SERIALIZED_NAME_INSTAGRAM = "instagram";
  @SerializedName(SERIALIZED_NAME_INSTAGRAM)
  private String instagram;

  public static final String SERIALIZED_NAME_YELP = "yelp";
  @SerializedName(SERIALIZED_NAME_YELP)
  private String yelp;

  public Merchant name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @ApiModelProperty(required = true, value = "")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public Merchant address(Address address) {
    this.address = address;
    return this;
  }

   /**
   * Get address
   * @return address
  **/
  @ApiModelProperty(value = "")
  public Address getAddress() {
    return address;
  }

  public void setAddress(Address address) {
    this.address = address;
  }

  public Merchant hours(OpenHours hours) {
    this.hours = hours;
    return this;
  }

   /**
   * Get hours
   * @return hours
  **/
  @ApiModelProperty(value = "")
  public OpenHours getHours() {
    return hours;
  }

  public void setHours(OpenHours hours) {
    this.hours = hours;
  }

  public Merchant image(String image) {
    this.image = image;
    return this;
  }

   /**
   * Get image
   * @return image
  **/
  @ApiModelProperty(value = "")
  public String getImage() {
    return image;
  }

  public void setImage(String image) {
    this.image = image;
  }

  public Merchant backgroundImage(String backgroundImage) {
    this.backgroundImage = backgroundImage;
    return this;
  }

   /**
   * Get backgroundImage
   * @return backgroundImage
  **/
  @ApiModelProperty(value = "")
  public String getBackgroundImage() {
    return backgroundImage;
  }

  public void setBackgroundImage(String backgroundImage) {
    this.backgroundImage = backgroundImage;
  }

  public Merchant category(CleanCategory category) {
    this.category = category;
    return this;
  }

   /**
   * Get category
   * @return category
  **/
  @ApiModelProperty(required = true, value = "")
  public CleanCategory getCategory() {
    return category;
  }

  public void setCategory(CleanCategory category) {
    this.category = category;
  }

  public Merchant phone(String phone) {
    this.phone = phone;
    return this;
  }

   /**
   * Get phone
   * @return phone
  **/
  @ApiModelProperty(value = "")
  public String getPhone() {
    return phone;
  }

  public void setPhone(String phone) {
    this.phone = phone;
  }

  public Merchant url(String url) {
    this.url = url;
    return this;
  }

   /**
   * Get url
   * @return url
  **/
  @ApiModelProperty(value = "")
  public String getUrl() {
    return url;
  }

  public void setUrl(String url) {
    this.url = url;
  }

  public Merchant facebook(String facebook) {
    this.facebook = facebook;
    return this;
  }

   /**
   * Get facebook
   * @return facebook
  **/
  @ApiModelProperty(value = "")
  public String getFacebook() {
    return facebook;
  }

  public void setFacebook(String facebook) {
    this.facebook = facebook;
  }

  public Merchant twitter(String twitter) {
    this.twitter = twitter;
    return this;
  }

   /**
   * Get twitter
   * @return twitter
  **/
  @ApiModelProperty(value = "")
  public String getTwitter() {
    return twitter;
  }

  public void setTwitter(String twitter) {
    this.twitter = twitter;
  }

  public Merchant instagram(String instagram) {
    this.instagram = instagram;
    return this;
  }

   /**
   * Get instagram
   * @return instagram
  **/
  @ApiModelProperty(value = "")
  public String getInstagram() {
    return instagram;
  }

  public void setInstagram(String instagram) {
    this.instagram = instagram;
  }

  public Merchant yelp(String yelp) {
    this.yelp = yelp;
    return this;
  }

   /**
   * Get yelp
   * @return yelp
  **/
  @ApiModelProperty(value = "")
  public String getYelp() {
    return yelp;
  }

  public void setYelp(String yelp) {
    this.yelp = yelp;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Merchant merchant = (Merchant) o;
    return Objects.equals(this.name, merchant.name) &&
        Objects.equals(this.address, merchant.address) &&
        Objects.equals(this.hours, merchant.hours) &&
        Objects.equals(this.image, merchant.image) &&
        Objects.equals(this.backgroundImage, merchant.backgroundImage) &&
        Objects.equals(this.category, merchant.category) &&
        Objects.equals(this.phone, merchant.phone) &&
        Objects.equals(this.url, merchant.url) &&
        Objects.equals(this.facebook, merchant.facebook) &&
        Objects.equals(this.twitter, merchant.twitter) &&
        Objects.equals(this.instagram, merchant.instagram) &&
        Objects.equals(this.yelp, merchant.yelp);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, address, hours, image, backgroundImage, category, phone, url, facebook, twitter, instagram, yelp);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Merchant {\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    address: ").append(toIndentedString(address)).append("\n");
    sb.append("    hours: ").append(toIndentedString(hours)).append("\n");
    sb.append("    image: ").append(toIndentedString(image)).append("\n");
    sb.append("    backgroundImage: ").append(toIndentedString(backgroundImage)).append("\n");
    sb.append("    category: ").append(toIndentedString(category)).append("\n");
    sb.append("    phone: ").append(toIndentedString(phone)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
    sb.append("    facebook: ").append(toIndentedString(facebook)).append("\n");
    sb.append("    twitter: ").append(toIndentedString(twitter)).append("\n");
    sb.append("    instagram: ").append(toIndentedString(instagram)).append("\n");
    sb.append("    yelp: ").append(toIndentedString(yelp)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

