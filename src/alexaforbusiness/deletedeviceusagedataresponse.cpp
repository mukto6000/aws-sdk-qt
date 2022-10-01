// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedeviceusagedataresponse.h"
#include "deletedeviceusagedataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteDeviceUsageDataResponse
 * \brief The DeleteDeviceUsageDataResponse class provides an interace for AlexaForBusiness DeleteDeviceUsageData responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::deleteDeviceUsageData
 */

/*!
 * Constructs a DeleteDeviceUsageDataResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeviceUsageDataResponse::DeleteDeviceUsageDataResponse(
        const DeleteDeviceUsageDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteDeviceUsageDataResponsePrivate(this), parent)
{
    setRequest(new DeleteDeviceUsageDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDeviceUsageDataRequest * DeleteDeviceUsageDataResponse::request() const
{
    Q_D(const DeleteDeviceUsageDataResponse);
    return static_cast<const DeleteDeviceUsageDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DeleteDeviceUsageData \a response.
 */
void DeleteDeviceUsageDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDeviceUsageDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteDeviceUsageDataResponsePrivate
 * \brief The DeleteDeviceUsageDataResponsePrivate class provides private implementation for DeleteDeviceUsageDataResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteDeviceUsageDataResponsePrivate object with public implementation \a q.
 */
DeleteDeviceUsageDataResponsePrivate::DeleteDeviceUsageDataResponsePrivate(
    DeleteDeviceUsageDataResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DeleteDeviceUsageData response element from \a xml.
 */
void DeleteDeviceUsageDataResponsePrivate::parseDeleteDeviceUsageDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeviceUsageDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
