// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicedefinitionsresponse.h"
#include "listdevicedefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionsResponse
 * \brief The ListDeviceDefinitionsResponse class provides an interace for Greengrass ListDeviceDefinitions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listDeviceDefinitions
 */

/*!
 * Constructs a ListDeviceDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeviceDefinitionsResponse::ListDeviceDefinitionsResponse(
        const ListDeviceDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListDeviceDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListDeviceDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeviceDefinitionsRequest * ListDeviceDefinitionsResponse::request() const
{
    Q_D(const ListDeviceDefinitionsResponse);
    return static_cast<const ListDeviceDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListDeviceDefinitions \a response.
 */
void ListDeviceDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeviceDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionsResponsePrivate
 * \brief The ListDeviceDefinitionsResponsePrivate class provides private implementation for ListDeviceDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListDeviceDefinitionsResponsePrivate object with public implementation \a q.
 */
ListDeviceDefinitionsResponsePrivate::ListDeviceDefinitionsResponsePrivate(
    ListDeviceDefinitionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListDeviceDefinitions response element from \a xml.
 */
void ListDeviceDefinitionsResponsePrivate::parseListDeviceDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
