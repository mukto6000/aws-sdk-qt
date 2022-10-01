// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeloggingoptionsresponse.h"
#include "describeloggingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeLoggingOptionsResponse
 * \brief The DescribeLoggingOptionsResponse class provides an interace for IoTSiteWise DescribeLoggingOptions responses.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web Services service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the Amazon Web Services Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise User Guide</a>. For information about IoT
 *  SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a> in the
 *  <i>IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::describeLoggingOptions
 */

/*!
 * Constructs a DescribeLoggingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLoggingOptionsResponse::DescribeLoggingOptionsResponse(
        const DescribeLoggingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DescribeLoggingOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeLoggingOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLoggingOptionsRequest * DescribeLoggingOptionsResponse::request() const
{
    Q_D(const DescribeLoggingOptionsResponse);
    return static_cast<const DescribeLoggingOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DescribeLoggingOptions \a response.
 */
void DescribeLoggingOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLoggingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DescribeLoggingOptionsResponsePrivate
 * \brief The DescribeLoggingOptionsResponsePrivate class provides private implementation for DescribeLoggingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeLoggingOptionsResponsePrivate object with public implementation \a q.
 */
DescribeLoggingOptionsResponsePrivate::DescribeLoggingOptionsResponsePrivate(
    DescribeLoggingOptionsResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DescribeLoggingOptions response element from \a xml.
 */
void DescribeLoggingOptionsResponsePrivate::parseDescribeLoggingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoggingOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
