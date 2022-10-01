// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateportalresponse.h"
#include "updateportalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdatePortalResponse
 * \brief The UpdatePortalResponse class provides an interace for IoTSiteWise UpdatePortal responses.
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
 * \sa IoTSiteWiseClient::updatePortal
 */

/*!
 * Constructs a UpdatePortalResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePortalResponse::UpdatePortalResponse(
        const UpdatePortalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new UpdatePortalResponsePrivate(this), parent)
{
    setRequest(new UpdatePortalRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePortalRequest * UpdatePortalResponse::request() const
{
    Q_D(const UpdatePortalResponse);
    return static_cast<const UpdatePortalRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise UpdatePortal \a response.
 */
void UpdatePortalResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePortalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::UpdatePortalResponsePrivate
 * \brief The UpdatePortalResponsePrivate class provides private implementation for UpdatePortalResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdatePortalResponsePrivate object with public implementation \a q.
 */
UpdatePortalResponsePrivate::UpdatePortalResponsePrivate(
    UpdatePortalResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise UpdatePortal response element from \a xml.
 */
void UpdatePortalResponsePrivate::parseUpdatePortalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePortalResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
