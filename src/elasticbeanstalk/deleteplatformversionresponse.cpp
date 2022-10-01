// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteplatformversionresponse.h"
#include "deleteplatformversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::DeletePlatformVersionResponse
 * \brief The DeletePlatformVersionResponse class provides an interace for ElasticBeanstalk DeletePlatformVersion responses.
 *
 * \inmodule QtAwsElasticBeanstalk
 *
 *  <fullname>AWS Elastic Beanstalk</fullname>
 * 
 *  AWS Elastic Beanstalk makes it easy for you to create, deploy, and manage scalable, fault-tolerant applications running
 *  on the Amazon Web Services
 * 
 *  cloud>
 * 
 *  For more information about this product, go to the <a href="http://aws.amazon.com/elasticbeanstalk/">AWS Elastic
 *  Beanstalk</a> details page. The location of the latest AWS Elastic Beanstalk WSDL is <a
 *  href="https://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">https://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>.
 *  To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 *  tools that enable you to access the API, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  For a list of region-specific endpoints that AWS Elastic Beanstalk supports, go to <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#elasticbeanstalk_region">Regions and Endpoints</a> in the
 *  <i>Amazon Web Services
 *
 * \sa ElasticBeanstalkClient::deletePlatformVersion
 */

/*!
 * Constructs a DeletePlatformVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePlatformVersionResponse::DeletePlatformVersionResponse(
        const DeletePlatformVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DeletePlatformVersionResponsePrivate(this), parent)
{
    setRequest(new DeletePlatformVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePlatformVersionRequest * DeletePlatformVersionResponse::request() const
{
    Q_D(const DeletePlatformVersionResponse);
    return static_cast<const DeletePlatformVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticBeanstalk DeletePlatformVersion \a response.
 */
void DeletePlatformVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePlatformVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticBeanstalk::DeletePlatformVersionResponsePrivate
 * \brief The DeletePlatformVersionResponsePrivate class provides private implementation for DeletePlatformVersionResponse.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a DeletePlatformVersionResponsePrivate object with public implementation \a q.
 */
DeletePlatformVersionResponsePrivate::DeletePlatformVersionResponsePrivate(
    DeletePlatformVersionResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/*!
 * Parses a ElasticBeanstalk DeletePlatformVersion response element from \a xml.
 */
void DeletePlatformVersionResponsePrivate::parseDeletePlatformVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePlatformVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
