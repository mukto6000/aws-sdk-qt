// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfilterresponse.h"
#include "createfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateFilterResponse
 * \brief The CreateFilterResponse class provides an interace for Personalize CreateFilter responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createFilter
 */

/*!
 * Constructs a CreateFilterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFilterResponse::CreateFilterResponse(
        const CreateFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateFilterResponsePrivate(this), parent)
{
    setRequest(new CreateFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFilterRequest * CreateFilterResponse::request() const
{
    Q_D(const CreateFilterResponse);
    return static_cast<const CreateFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize CreateFilter \a response.
 */
void CreateFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateFilterResponsePrivate
 * \brief The CreateFilterResponsePrivate class provides private implementation for CreateFilterResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateFilterResponsePrivate object with public implementation \a q.
 */
CreateFilterResponsePrivate::CreateFilterResponsePrivate(
    CreateFilterResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateFilter response element from \a xml.
 */
void CreateFilterResponsePrivate::parseCreateFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
