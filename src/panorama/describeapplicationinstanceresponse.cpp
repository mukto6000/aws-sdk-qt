/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeapplicationinstanceresponse.h"
#include "describeapplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribeApplicationInstanceResponse
 * \brief The DescribeApplicationInstanceResponse class provides an interace for Panorama DescribeApplicationInstance responses.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::describeApplicationInstance
 */

/*!
 * Constructs a DescribeApplicationInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeApplicationInstanceResponse::DescribeApplicationInstanceResponse(
        const DescribeApplicationInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DescribeApplicationInstanceResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeApplicationInstanceRequest * DescribeApplicationInstanceResponse::request() const
{
    Q_D(const DescribeApplicationInstanceResponse);
    return static_cast<const DescribeApplicationInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DescribeApplicationInstance \a response.
 */
void DescribeApplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeApplicationInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DescribeApplicationInstanceResponsePrivate
 * \brief The DescribeApplicationInstanceResponsePrivate class provides private implementation for DescribeApplicationInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribeApplicationInstanceResponsePrivate object with public implementation \a q.
 */
DescribeApplicationInstanceResponsePrivate::DescribeApplicationInstanceResponsePrivate(
    DescribeApplicationInstanceResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DescribeApplicationInstance response element from \a xml.
 */
void DescribeApplicationInstanceResponsePrivate::parseDescribeApplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
