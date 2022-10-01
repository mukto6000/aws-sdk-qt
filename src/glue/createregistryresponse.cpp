// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createregistryresponse.h"
#include "createregistryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateRegistryResponse
 * \brief The CreateRegistryResponse class provides an interace for Glue CreateRegistry responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createRegistry
 */

/*!
 * Constructs a CreateRegistryResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRegistryResponse::CreateRegistryResponse(
        const CreateRegistryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateRegistryResponsePrivate(this), parent)
{
    setRequest(new CreateRegistryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRegistryRequest * CreateRegistryResponse::request() const
{
    Q_D(const CreateRegistryResponse);
    return static_cast<const CreateRegistryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateRegistry \a response.
 */
void CreateRegistryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRegistryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateRegistryResponsePrivate
 * \brief The CreateRegistryResponsePrivate class provides private implementation for CreateRegistryResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateRegistryResponsePrivate object with public implementation \a q.
 */
CreateRegistryResponsePrivate::CreateRegistryResponsePrivate(
    CreateRegistryResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateRegistry response element from \a xml.
 */
void CreateRegistryResponsePrivate::parseCreateRegistryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRegistryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
