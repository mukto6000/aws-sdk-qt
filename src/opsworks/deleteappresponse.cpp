// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappresponse.h"
#include "deleteappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/*!
 * \class QtAws::OpsWorks::DeleteAppResponse
 * \brief The DeleteAppResponse class provides an interace for OpsWorks DeleteApp responses.
 *
 * \inmodule QtAwsOpsWorks
 *
 *  <fullname>AWS OpsWorks</fullname>
 * 
 *  Welcome to the <i>AWS OpsWorks Stacks API Reference</i>. This guide provides descriptions, syntax, and usage examples
 *  for AWS OpsWorks Stacks actions and data types, including common parameters and error codes.
 * 
 *  </p
 * 
 *  AWS OpsWorks Stacks is an application management service that provides an integrated experience for overseeing the
 *  complete application lifecycle. For information about this product, go to the <a
 *  href="http://aws.amazon.com/opsworks/">AWS OpsWorks</a> details page.
 * 
 *  </p
 * 
 *  <b>SDKs and CLI</b>
 * 
 *  </p
 * 
 *  The most common way to use the AWS OpsWorks Stacks API is by using the AWS Command Line Interface (CLI) or by using one
 *  of the AWS SDKs to implement applications in your preferred language. For more information,
 * 
 *  see> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-welcome.html">AWS CLI</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/AWSJavaSDK/latest/javadoc/com/amazonaws/services/opsworks/AWSOpsWorksClient.html">AWS
 *  SDK for Java</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sdkfornet/latest/apidocs/html/N_Amazon_OpsWorks.htm">AWS SDK for .NET</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/aws-sdk-php-2/latest/class-Aws.OpsWorks.OpsWorksClient.html">AWS SDK for PHP 2</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/sdkforruby/api/">AWS SDK for Ruby</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/sdkforjavascript/">AWS SDK for Node.js</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.pythonboto.org/en/latest/ref/opsworks.html">AWS SDK for Python(Boto)</a>
 * 
 *  </p </li> </ul>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  AWS OpsWorks Stacks supports the following endpoints, all HTTPS. You must connect to one of the following endpoints.
 *  Stacks can only be accessed or managed within the endpoint in which they are
 * 
 *  created> <ul> <li>
 * 
 *  opsworks.us-east-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.us-east-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.us-west-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.us-west-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.ca-central-1.amazonaws.com (API only; not available in the AWS
 * 
 *  console> </li> <li>
 * 
 *  opsworks.eu-west-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.eu-west-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.eu-west-3.amazonaws.co> </li> <li>
 * 
 *  opsworks.eu-central-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-northeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-northeast-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-south-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-southeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-southeast-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.sa-east-1.amazonaws.co> </li> </ul>
 * 
 *  <b>Chef Versions</b>
 * 
 *  </p
 * 
 *  When you call <a>CreateStack</a>, <a>CloneStack</a>, or <a>UpdateStack</a> we recommend you use the
 *  <code>ConfigurationManager</code> parameter to specify the Chef version. The recommended and default value for Linux
 *  stacks is currently 12. Windows stacks use Chef 12.2. For more information, see <a
 *  href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-chef11.html">Chef
 * 
 *  Versions</a>> <note>
 * 
 *  You can specify Chef 12, 11.10, or 11.4 for your Linux stack. We recommend migrating your existing Linux stacks to Chef
 *  12 as soon as
 *
 * \sa OpsWorksClient::deleteApp
 */

/*!
 * Constructs a DeleteAppResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAppResponse::DeleteAppResponse(
        const DeleteAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DeleteAppResponsePrivate(this), parent)
{
    setRequest(new DeleteAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAppRequest * DeleteAppResponse::request() const
{
    Q_D(const DeleteAppResponse);
    return static_cast<const DeleteAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpsWorks DeleteApp \a response.
 */
void DeleteAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpsWorks::DeleteAppResponsePrivate
 * \brief The DeleteAppResponsePrivate class provides private implementation for DeleteAppResponse.
 * \internal
 *
 * \inmodule QtAwsOpsWorks
 */

/*!
 * Constructs a DeleteAppResponsePrivate object with public implementation \a q.
 */
DeleteAppResponsePrivate::DeleteAppResponsePrivate(
    DeleteAppResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/*!
 * Parses a OpsWorks DeleteApp response element from \a xml.
 */
void DeleteAppResponsePrivate::parseDeleteAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpsWorks
} // namespace QtAws
